//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class HKCDADocumentSample, HKCDAPDFGenerator, HKHealthStore, NSData, NSURL;

@interface HKCDADocumentShareItemSource : UIActivityItemProvider
{
    HKCDADocumentSample *_documentSample;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    NSData *_shareData;	// 24 = 0x18
    HKCDAPDFGenerator *_generator;	// 32 = 0x20
    NSURL *_exportArchiveURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000025db45
@property(readonly, nonatomic) NSURL *exportArchiveURL; // @synthesize exportArchiveURL=_exportArchiveURL;
@property(readonly, nonatomic) HKCDAPDFGenerator *generator; // @synthesize generator=_generator;
@property(readonly, nonatomic) NSData *shareData; // @synthesize shareData=_shareData;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) HKCDADocumentSample *documentSample; // @synthesize documentSample=_documentSample;
- (id)item;	// IMP=0x000000000025d996
- (void)_loadShareDataWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d85d
- (void)_generatePDFforCDA:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d751
- (void)_buildZipArchiveWithCDA:(id)arg1 generatedPDF:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000025d349
- (id)_simpleError:(id)arg1;	// IMP=0x000000000025d26b
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;	// IMP=0x000000000025d25e
- (void)dealloc;	// IMP=0x000000000025d17a
- (id)initWithDocumentSample:(id)arg1 healthStore:(id)arg2;	// IMP=0x000000000025cfcf

@end

