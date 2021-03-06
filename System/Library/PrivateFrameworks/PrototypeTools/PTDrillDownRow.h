//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PTSettings;

@interface PTDrillDownRow
{
    PTSettings *_childSettings;	// 144 = 0x90
    NSString *_childKeyPath;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000739e
+ (id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2;	// IMP=0x0000000000006e96
+ (id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2;	// IMP=0x0000000000006e10
- (void).cxx_destruct;	// IMP=0x00000000000074cf
@property(readonly, nonatomic) NSString *childKeyPath; // @synthesize childKeyPath=_childKeyPath;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007423
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000073a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007350
- (unsigned long long)hash;	// IMP=0x000000000000725c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000071e2
- (id)value;	// IMP=0x000000000000715f
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;	// IMP=0x00000000000070d2
- (void)setSettings:(id)arg1;	// IMP=0x0000000000006fd6
- (void)dealloc;	// IMP=0x0000000000006f8a
- (id)initWithChildKeyPath:(id)arg1;	// IMP=0x0000000000006f1c

@end

