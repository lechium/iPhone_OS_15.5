//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload
{
    MCAPNConfiguration *_attachAPN;	// 80 = 0x50
    NSArray *_APNs;	// 88 = 0x58
}

+ (id)localizedPluralForm;	// IMP=0x000000000003ecdf
+ (id)localizedSingularForm;	// IMP=0x000000000003eccc
+ (id)typeStrings;	// IMP=0x000000000003ec65
- (void).cxx_destruct;	// IMP=0x0000000000040879
@property(retain, nonatomic) NSArray *APNs; // @synthesize APNs=_APNs;
@property(retain, nonatomic) MCAPNConfiguration *attachAPN; // @synthesize attachAPN=_attachAPN;
- (id)installationWarnings;	// IMP=0x000000000004074b
- (id)subtitle2Description;	// IMP=0x00000000000406a4
- (id)subtitle2Label;	// IMP=0x00000000000405fd
- (id)subtitle1Description;	// IMP=0x0000000000040553
- (id)subtitle1Label;	// IMP=0x00000000000404a9
- (id)APNsDescription;	// IMP=0x000000000004034a
- (id)APNsLabel;	// IMP=0x0000000000040291
- (id)APNConfigurationDescription;	// IMP=0x0000000000040209
- (id)attachAPNConfigurationLabel;	// IMP=0x00000000000401b7
- (id)payloadDescriptionKeyValueSections;	// IMP=0x000000000003f96d
- (id)verboseDescription;	// IMP=0x000000000003f6f2
- (id)stubDictionary;	// IMP=0x000000000003f3ef
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000003ecf2

@end
