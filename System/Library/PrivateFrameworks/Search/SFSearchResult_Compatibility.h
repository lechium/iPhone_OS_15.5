//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightServices/SFSearchResult_SpotlightExtras.h>

@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras
{
}

- (void)writeTo:(id)arg1;	// IMP=0x0000000000001db7
- (id)section_header;	// IMP=0x0000000000001daa
- (_Bool)isQuickGlance;	// IMP=0x0000000000001da2
- (id)uniqueIdentifier;	// IMP=0x0000000000001d1a
- (void)setUniqueIdentifier:(id)arg1;	// IMP=0x0000000000001d14
@property(retain, nonatomic) NSString *externalIdentifier;
@property(retain, nonatomic) NSString *resultIdentifier;
- (id)simpleTitle;	// IMP=0x0000000000001c6d
- (void)setSimpleTitle:(id)arg1;	// IMP=0x0000000000001bab
@property(retain, nonatomic) NSString *compatibilityTitle;
- (id)copy;	// IMP=0x0000000000001ab9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001aae
- (Class)classForCoder;	// IMP=0x0000000000001a9d
- (Class)classForKeyedArchiver;	// IMP=0x0000000000001a8c
- (id)debugDescription;	// IMP=0x000000000000196a

@end
