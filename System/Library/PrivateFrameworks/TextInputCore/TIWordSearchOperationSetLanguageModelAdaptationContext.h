//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext
{
    TIMecabraWrapper *_mecabraWrapper;	// 8 = 0x8
    TILanguageModelAdaptationContext *_adaptationContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e2ed0
@property(copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)perform;	// IMP=0x00000000000e2cc7
- (void)cancel;	// IMP=0x00000000000e2cc1
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;	// IMP=0x00000000000e2bf2

@end
