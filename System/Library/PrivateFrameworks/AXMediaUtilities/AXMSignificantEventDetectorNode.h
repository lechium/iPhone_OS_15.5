//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VN6Mb1ME89lyW3HpahkEygIG;

@interface AXMSignificantEventDetectorNode
{
    VN6Mb1ME89lyW3HpahkEygIG *_request;	// 8 = 0x8
}

+ (_Bool)addSignificantEventResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(_Bool)arg4;	// IMP=0x00000000000ae688
+ (id)title;	// IMP=0x00000000000ae27c
+ (_Bool)isSupported;	// IMP=0x00000000000ae22a
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ae222
- (void).cxx_destruct;	// IMP=0x00000000000aed65
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x00000000000ae3b0
- (_Bool)validateVisionKitSoftLinkSymbols;	// IMP=0x00000000000ae289

@end
