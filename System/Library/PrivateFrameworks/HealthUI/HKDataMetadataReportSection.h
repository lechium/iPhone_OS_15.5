//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKHealthStore, HKSample, NSString;

@interface HKDataMetadataReportSection
{
    HKSample *_sample;	// 8 = 0x8
    NSString *_detailedReportName;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000882e3
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) NSString *detailedReportName; // @synthesize detailedReportName=_detailedReportName;
@property(readonly, nonatomic) HKSample *sample; // @synthesize sample=_sample;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000087ff7
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x0000000000087ed2
- (id)documentImageForXMLFiles;	// IMP=0x0000000000087e3e
- (unsigned long long)numberOfRowsInSection;	// IMP=0x0000000000087e33
- (id)sectionTitle;	// IMP=0x0000000000087e2b
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;	// IMP=0x0000000000087d2a

@end

