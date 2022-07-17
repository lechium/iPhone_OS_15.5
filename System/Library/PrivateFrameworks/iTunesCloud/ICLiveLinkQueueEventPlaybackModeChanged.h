//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICLiveLinkQueueEventPlaybackModeChanged : NSObject
{
    long long _kind;	// 8 = 0x8
    CDUnknownBlockType _shuffleType;	// 16 = 0x10
    CDUnknownBlockType _repeatType;	// 24 = 0x18
    CDUnknownBlockType _autoPlayEnabled;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017f384
@property(readonly, nonatomic) CDUnknownBlockType autoPlayEnabled; // @synthesize autoPlayEnabled=_autoPlayEnabled;
@property(readonly, nonatomic) CDUnknownBlockType repeatType; // @synthesize repeatType=_repeatType;
@property(readonly, nonatomic) CDUnknownBlockType shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
- (id)description;	// IMP=0x000000000017f128
- (id)initWithUpdatedAutoPlayEnabled:(_Bool)arg1;	// IMP=0x000000000017f091
- (id)initWithUpdatedRepeatType:(long long)arg1;	// IMP=0x000000000017effa
- (id)initWithUpdatedShuffleType:(long long)arg1;	// IMP=0x000000000017ef63

@end
