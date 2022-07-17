//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CertUICertificatePropertiesInfo : NSObject
{
    NSArray *_sections;	// 8 = 0x8
    NSArray *_sectionTitles;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ee71
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000000ec56
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000000ebc3
- (id)_sendablePropertiesFromProperties:(id)arg1;	// IMP=0x000000000000e9e1
- (id)_sendablePropertyFromProperty:(id)arg1;	// IMP=0x000000000000e822
- (id)_sectionsFromProperties:(id)arg1;	// IMP=0x000000000000e4ed
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;	// IMP=0x000000000000e445
- (id)_cellInfosForSection:(id)arg1;	// IMP=0x000000000000e070
- (void)_setup:(id)arg1;	// IMP=0x000000000000dbec
- (id)initWithTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000000db1f
- (id)initWithSendableCertificateProperties:(id)arg1;	// IMP=0x000000000000da87
- (id)initWithCertificateProperties:(id)arg1;	// IMP=0x000000000000d9c3
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000000000d8e5

@end
