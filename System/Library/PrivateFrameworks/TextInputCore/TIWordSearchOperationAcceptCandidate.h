//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate
{
    void *_mecabraCandidate;	// 8 = 0x8
    _Bool _partialCandidate;	// 16 = 0x10
    TIMecabraWrapper *_mecabraWrapper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b325c
@property(nonatomic, getter=isPartialCandidate) _Bool partialCandidate; // @synthesize partialCandidate=_partialCandidate;
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)perform;	// IMP=0x00000000001b3187
- (void)cancel;	// IMP=0x00000000001b3181
- (void)dealloc;	// IMP=0x00000000001b313b
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(_Bool)arg3;	// IMP=0x00000000001b3084

@end
