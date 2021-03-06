//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMScreenGrabber;

@interface AXMScreenCaptureNode
{
    AXMScreenGrabber *_screenGrabber;	// 8 = 0x8
}

+ (id)title;	// IMP=0x0000000000010373
+ (_Bool)isSupported;	// IMP=0x000000000001036b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010363
- (void).cxx_destruct;	// IMP=0x0000000000010af2
@property(retain, nonatomic) AXMScreenGrabber *screenGrabber; // @synthesize screenGrabber=_screenGrabber;
- (void)triggerWithScreenCaptureRegion:(struct CGRect)arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000010897
- (void)produceImage:(id)arg1;	// IMP=0x0000000000010380
- (void)nodeInitialize;	// IMP=0x000000000001031d

@end

