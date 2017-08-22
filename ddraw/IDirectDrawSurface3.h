#pragma once

class myIDirectDrawSurface3 : public IDirectDrawSurface3
{
public:
	myIDirectDrawSurface3(IDirectDrawSurface3 * aOriginal);
	~myIDirectDrawSurface3();
	HRESULT __stdcall QueryInterface(REFIID riid, LPVOID FAR * ppvObj);
	ULONG __stdcall AddRef();
	ULONG __stdcall Release();
	HRESULT __stdcall AddAttachedSurface(LPDIRECTDRAWSURFACE3 a);
	HRESULT __stdcall AddOverlayDirtyRect(LPRECT a);
	HRESULT __stdcall Blt(LPRECT a, LPDIRECTDRAWSURFACE3 b, LPRECT c, DWORD d, LPDDBLTFX e);
	HRESULT __stdcall BltBatch(LPDDBLTBATCH a, DWORD b, DWORD c);
	HRESULT __stdcall BltFast(DWORD a, DWORD b, LPDIRECTDRAWSURFACE3 c, LPRECT d, DWORD e);
	HRESULT __stdcall DeleteAttachedSurface(DWORD a, LPDIRECTDRAWSURFACE3 b);
	HRESULT __stdcall EnumAttachedSurfaces(LPVOID a, LPDDENUMSURFACESCALLBACK b);
	HRESULT __stdcall EnumOverlayZOrders(DWORD a, LPVOID b, LPDDENUMSURFACESCALLBACK c);
	HRESULT __stdcall Flip(LPDIRECTDRAWSURFACE3 a, DWORD b);
	HRESULT __stdcall GetAttachedSurface(LPDDSCAPS a, LPDIRECTDRAWSURFACE3 FAR * b);
	HRESULT __stdcall GetBltStatus(DWORD a);
	HRESULT __stdcall GetCaps(LPDDSCAPS a);
	HRESULT __stdcall GetClipper(LPDIRECTDRAWCLIPPER FAR * a);
	HRESULT __stdcall GetColorKey(DWORD a, LPDDCOLORKEY b);
	HRESULT __stdcall GetDC(HDC FAR * a);
	HRESULT __stdcall GetFlipStatus(DWORD a);
	HRESULT __stdcall GetOverlayPosition(LPLONG a, LPLONG b);
	HRESULT __stdcall GetPalette(LPDIRECTDRAWPALETTE FAR * a);
	HRESULT __stdcall GetPixelFormat(LPDDPIXELFORMAT a);
	HRESULT __stdcall GetSurfaceDesc(LPDDSURFACEDESC a);
	HRESULT __stdcall Initialize(LPDIRECTDRAW a, LPDDSURFACEDESC b);
	HRESULT __stdcall IsLost();
	HRESULT __stdcall Lock(LPRECT a, LPDDSURFACEDESC b, DWORD c, HANDLE d);
	HRESULT __stdcall ReleaseDC(HDC a);
	HRESULT __stdcall Restore();
	HRESULT __stdcall SetClipper(LPDIRECTDRAWCLIPPER a);
	HRESULT __stdcall SetColorKey(DWORD a, LPDDCOLORKEY b);
	HRESULT __stdcall SetOverlayPosition(LONG a, LONG b);
	HRESULT __stdcall SetPalette(LPDIRECTDRAWPALETTE a);
	HRESULT __stdcall Unlock(LPVOID a);
	HRESULT __stdcall UpdateOverlay(LPRECT a, LPDIRECTDRAWSURFACE3 b, LPRECT c, DWORD d, LPDDOVERLAYFX e);
	HRESULT __stdcall UpdateOverlayDisplay(DWORD a);
	HRESULT __stdcall UpdateOverlayZOrder(DWORD a, LPDIRECTDRAWSURFACE3 b);
	HRESULT __stdcall GetDDInterface(LPVOID FAR * a);
	HRESULT __stdcall PageLock(DWORD a);
	HRESULT __stdcall PageUnlock(DWORD a);
	HRESULT __stdcall SetSurfaceDesc(LPDDSURFACEDESC a, DWORD b);
	IDirectDrawSurface3 * mOriginal;
};
