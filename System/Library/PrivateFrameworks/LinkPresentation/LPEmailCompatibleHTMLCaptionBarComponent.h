//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

__attribute__((visibility("hidden")))
@interface LPEmailCompatibleHTMLCaptionBarComponent
{
    LPCaptionBarStyle *_style;	// 8 = 0x8
    LPCaptionBarPresentationProperties *_presentationProperties;	// 16 = 0x10
}

+ (id)ruleDictionaryForStyle:(id)arg1;	// IMP=0x00000000000064f0
+ (id)baseRules;	// IMP=0x000000000000640e
- (void).cxx_destruct;	// IMP=0x0000000000006502
- (void)buildComponents;	// IMP=0x000000000000580f
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;	// IMP=0x000000000000542a

@end
