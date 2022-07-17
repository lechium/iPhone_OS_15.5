//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShowCuratedCollectionAction
{
    int _resultProviderID;	// 8 = 0x8
    unsigned long long _curatedCollectionMUID;	// 16 = 0x10
}

@property(readonly, nonatomic) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(readonly, nonatomic) unsigned long long curatedCollectionMUID; // @synthesize curatedCollectionMUID=_curatedCollectionMUID;
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x00100000006ecf77
- (_Bool)isCompatibleWithNavigation;	// IMP=0x00100000006ecf6f
- (id)initWithCuratedCollectionID:(unsigned long long)arg1 resultProviderID:(int)arg2;	// IMP=0x00100000006ecf19

@end
