//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNQuickFaceTimeAction
{
    _Bool _audioOnly;	// 120 = 0x78
}

+ (id)defaultFaceTimeAudioTitle;	// IMP=0x000000000004639b
+ (id)defaultFaceTimeTitle;	// IMP=0x000000000004633f
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044303
- (unsigned long long)score;	// IMP=0x00000000000442d0
- (id)subtitleForContext:(long long)arg1;	// IMP=0x00000000000441f8
- (id)titleForContext:(long long)arg1;	// IMP=0x000000000004412f
- (id)category;	// IMP=0x0000000000044101
- (id)identifier;	// IMP=0x00000000000440d7

@end

