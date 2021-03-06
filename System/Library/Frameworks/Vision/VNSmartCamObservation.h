//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface VNSmartCamObservation
{
    NSArray *_smartCamprints;	// 80 = 0x50
    NSString *_smartCamprintVersion;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000134e17
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000134e0a
+ (id)smartCamprintCurrentVersion;	// IMP=0x0000000000134df1
+ (id)observationWithSmartCamprints:(id)arg1;	// IMP=0x0000000000134d8f
- (void).cxx_destruct;	// IMP=0x0000000000134d5e
@property(readonly, copy, nonatomic) NSString *smartCamprintVersion; // @synthesize smartCamprintVersion=_smartCamprintVersion;
@property(copy, nonatomic) NSArray *smartCamprints; // @synthesize smartCamprints=_smartCamprints;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000134b60
- (unsigned long long)hash;	// IMP=0x0000000000134a8d
- (id)vn_cloneObject;	// IMP=0x00000000001349fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013493b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000134681
- (id)initWithOriginatingRequestSpecifier:(id)arg1 smartCamprints:(id)arg2;	// IMP=0x00000000001344eb
- (id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2;	// IMP=0x0000000000134373

@end

