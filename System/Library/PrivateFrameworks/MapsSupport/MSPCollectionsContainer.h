//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSPContainer;

@interface MSPCollectionsContainer
{
    MSPContainer *_itemContainer;	// 8 = 0x8
}

+ (id)sharedRemoteContainer;	// IMP=0x0000000000025fd6
+ (id)sharedLocalContainer;	// IMP=0x0000000000025e89
- (void).cxx_destruct;	// IMP=0x00000000000261be
@property(retain, nonatomic) MSPContainer *itemContainer; // @synthesize itemContainer=_itemContainer;
- (id)queryWithDelegate:(id)arg1;	// IMP=0x0000000000026109
- (id)initWithPersister:(id)arg1 itemContainer:(id)arg2;	// IMP=0x0000000000026091

@end

