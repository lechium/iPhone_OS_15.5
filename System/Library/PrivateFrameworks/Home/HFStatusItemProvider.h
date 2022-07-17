//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, HMRoom;
@protocol HFCharacteristicValueSource;

@interface HFStatusItemProvider
{
    HMHome *_home;	// 8 = 0x8
    HMRoom *_room;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
}

+ (id)sortOrderForStatusItemCategory:(unsigned long long)arg1;	// IMP=0x00000000001118f5
+ (id)_statusItemClasses;	// IMP=0x0000000000111633
+ (_Bool)hasStatusItemForServiceType:(id)arg1;	// IMP=0x00000000001115b8
- (void).cxx_destruct;	// IMP=0x0000000000112691
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)_buildStatusItemsForGroupedStatusItem:(id)arg1;	// IMP=0x00000000001124a7
- (id)_buildStatusItemWithClass:(Class)arg1 home:(id)arg2 room:(id)arg3 valueSource:(id)arg4;	// IMP=0x00000000001123ba
- (id)_createStatusItemsForHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000112216
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011218c
- (id)initWithHome:(id)arg1 room:(id)arg2;	// IMP=0x0000000000112174
- (id)initWithHome:(id)arg1 room:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000011215c
- (id)initWithHome:(id)arg1 room:(id)arg2 overrideValueSource:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000111feb
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000111f36

@end
