//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NTKComplication;

@interface NTKGreenfieldPlaceholderComplication
{
    NTKComplication *_complication;	// 16 = 0x10
    NSNumber *_appStoreItemId;	// 24 = 0x18
    NSString *_appName;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029030c
+ (id)placeholderWithComplication:(id)arg1;	// IMP=0x0000000000290155
+ (id)placeholderWithComplication:(id)arg1 appStoreItemId:(id)arg2 appName:(id)arg3;	// IMP=0x0000000000290038
- (void).cxx_destruct;	// IMP=0x0000000000290870
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSNumber *appStoreItemId; // @synthesize appStoreItemId=_appStoreItemId;
@property(readonly, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
- (id)localizedRichKeylineLabelText;	// IMP=0x0000000000290828
- (id)localizedRichDetailText;	// IMP=0x0000000000290813
- (id)localizedKeylineLabelText;	// IMP=0x00000000002907fe
- (id)localizedDetailText;	// IMP=0x00000000002907e9
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;	// IMP=0x00000000002906c3
- (void)_addKeysToJSONDictionary:(id)arg1;	// IMP=0x00000000002905e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029052d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000290314
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000290298
- (id)appIdentifier;	// IMP=0x000000000029027b
- (id)_generateUniqueIdentifier;	// IMP=0x0000000000290204
- (_Bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000002901e7
- (id)description;	// IMP=0x00000000002901ac

@end

