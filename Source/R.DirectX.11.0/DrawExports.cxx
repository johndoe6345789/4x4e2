#include "Draw.hxx"

namespace Renderers::Modules
{
    extern "C" u32 EnableCulling(const RendererCullMode mode)
    {
        Renderer::DX11::Draw::SetCulling(mode);

        return TRUE;
    }

    extern "C" u32 PolyListTL(const RCVX* vertexes, const u32 vertexCount,
        const u16* indexes, const u32 indexCount, const RendererMode mode)
    {
        return Renderer::DX11::Draw::PolyList(vertexes, vertexCount, indexes, indexCount, mode);
    }

    extern "C" u32 SetAlpha(const u32 value)
    {
        Renderer::DX11::Draw::SetAlphaRef(value);

        return TRUE;
    }

    extern "C" u32 SetDestinationBlend(const RendererDestinationBlend mode)
    {
        Renderer::DX11::Draw::SetDestinationBlend(mode);

        return TRUE;
    }

    extern "C" u32 SetSourceBlend(const RendererSourceBlendMode mode)
    {
        Renderer::DX11::Draw::SetSourceBlend(mode);

        return TRUE;
    }

    extern "C" u32 SetTextureClamp(const RendererClampMode u, const RendererClampMode v,
        const u32 indx)
    {
        Renderer::DX11::Draw::SetClamp(indx, u, v);

        return TRUE;
    }
}
