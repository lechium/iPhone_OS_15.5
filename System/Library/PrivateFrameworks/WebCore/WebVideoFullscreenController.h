//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WebVideoFullscreenController : NSObject
{
    struct RefPtr<VideoFullscreenControllerContext, WTF::RawPtrTraits<VideoFullscreenControllerContext>, WTF::DefaultRefDerefTraits<VideoFullscreenControllerContext>> _context;	// 8 = 0x8
    struct RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> _videoElement;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000237d940
- (void).cxx_destruct;	// IMP=0x000000000237d880
- (void)didFinishFullscreen:(void *)arg1;	// IMP=0x000000000237d7a0
- (void)requestHideAndExitFullscreen;	// IMP=0x000000000237d780
- (void)exitFullscreen;	// IMP=0x000000000237d620
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;	// IMP=0x000000000237d0f0
- (NakedPtr_311734dd)videoElement;	// IMP=0x000000000237d0e0
- (void)setVideoElement:(NakedPtr_311734dd)arg1;	// IMP=0x000000000237d070
- (id)init;	// IMP=0x000000000237d040

@end
