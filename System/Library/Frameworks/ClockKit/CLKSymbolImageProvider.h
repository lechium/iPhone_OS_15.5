//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, UIColor;

@interface CLKSymbolImageProvider
{
    _Bool _finalized;	// 8 = 0x8
    NSString *_privateSystemName;	// 16 = 0x10
    _Bool _hierarchicalSymbol;	// 24 = 0x18
    _Bool _ignoreHierarchicalLayers;	// 25 = 0x19
    NSNumber *_overridePointSize;	// 32 = 0x20
    NSString *_systemName;	// 40 = 0x28
    NSNumber *_pointSize;	// 48 = 0x30
    long long _weight;	// 56 = 0x38
    UIColor *_secondaryTintColor;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b038
+ (id)_symbolImageProviderWithSystemName:(id)arg1;	// IMP=0x000000000002a6ec
+ (id)symbolImageProviderWithSystemName:(id)arg1;	// IMP=0x000000000002a6a3
- (void).cxx_destruct;	// IMP=0x000000000002bc38
@property(retain, nonatomic) UIColor *secondaryTintColor; // @synthesize secondaryTintColor=_secondaryTintColor;
@property(nonatomic) _Bool ignoreHierarchicalLayers; // @synthesize ignoreHierarchicalLayers=_ignoreHierarchicalLayers;
@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSNumber *pointSize; // @synthesize pointSize=_pointSize;
@property(readonly, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSNumber *overridePointSize; // @synthesize overridePointSize=_overridePointSize;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;	// IMP=0x000000000002b970
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002b6f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b5bb
- (unsigned long long)hash;	// IMP=0x000000000002b49f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b382
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b18e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b040
- (id)createSymbolImageForType:(long long)arg1 color:(id)arg2;	// IMP=0x000000000002af40
- (id)createSymbolImage;	// IMP=0x000000000002aee1
- (id)_createSymbolImageWithForeground:(id)arg1 background:(id)arg2;	// IMP=0x000000000002ad47
- (id)_createSymbolImageWithConfiguration:(id)arg1;	// IMP=0x000000000002acab
- (id)_configuration;	// IMP=0x000000000002ab5c
@property(readonly, nonatomic) _Bool isTwoPiece;
- (void)finalizeWithPointSize:(id)arg1 weight:(long long)arg2 maxSDKSize:(struct CGSize)arg3 maxDeviceSize:(struct CGSize)arg4 cornerRadius:(double)arg5;	// IMP=0x000000000002a93f
- (void)finalizeWithPointSize:(id)arg1 weight:(long long)arg2 maxSDKSize:(struct CGSize)arg3 maxDeviceSize:(struct CGSize)arg4 maskToCircle:(_Bool)arg5;	// IMP=0x000000000002a735
- (id)_initWithSystemName:(id)arg1;	// IMP=0x000000000002a5c4
- (id)initWithSystemName:(id)arg1;	// IMP=0x000000000002a4f8

@end

