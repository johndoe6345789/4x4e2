#include "DrawState.hxx"

namespace Renderer::DX11::Draw
{
    void SetSourceBlend(const Renderers::RendererSourceBlendMode mode)
    {
        Current.SourceBlend = mode;
    }

    void SetDestinationBlend(const Renderers::RendererDestinationBlend mode)
    {
        Current.DestinationBlend = mode;
    }

    void SetCulling(const Renderers::RendererCullMode mode)
    {
        Current.Cull = mode;
    }

    void SetAlphaRef(const u32 value)
    {
        Current.AlphaRef = value;
    }

    void SetClamp(const u32 stage, const Renderers::RendererClampMode u,
        const Renderers::RendererClampMode v)
    {
        if (stage >= MaxClampStageCount) { return; }

        Current.ClampU[stage] = u;
        Current.ClampV[stage] = v;
    }
}
