//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface HDDiscardWorkoutOperation
{
    NSUUID *_builderIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000045a8e6
@property(readonly, copy, nonatomic) NSUUID *builderIdentifier; // @synthesize builderIdentifier=_builderIdentifier;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000045a821
- (id)initWithBuilderIdentifier:(id)arg1;	// IMP=0x000000000045a7a7

@end

