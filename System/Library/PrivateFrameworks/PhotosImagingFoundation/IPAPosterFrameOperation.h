//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAPosterFrameOperation
{
    CDStruct_1b6d18a9 _frameTime;	// 8 = 0x8
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
- (_Bool)isEqualToOperation:(id)arg1;	// IMP=0x0000000000025c1a
- (id)debugDescription;	// IMP=0x0000000000025b76
- (id)identifier;	// IMP=0x0000000000025b57
- (id)settingsDictionary;	// IMP=0x0000000000025a8e
- (id)initWithSettingsDictionary:(id)arg1;	// IMP=0x00000000000259d8
- (id)initWithOperation:(id)arg1;	// IMP=0x0000000000025966
- (id)initWithFrameTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000258ca
- (_Bool)isMigratable;	// IMP=0x00000000000258c2

@end
