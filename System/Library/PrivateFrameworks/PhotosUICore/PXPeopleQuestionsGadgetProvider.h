//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PXForYouPeopleQuestionsDataSource;

@interface PXPeopleQuestionsGadgetProvider
{
    PXForYouPeopleQuestionsDataSource *_dataSource;	// 8 = 0x8
}

+ (id)_gadgetForQuestion:(id)arg1;	// IMP=0x000000000097dd71
- (void).cxx_destruct;	// IMP=0x000000000097dc9c
@property(retain, nonatomic) PXForYouPeopleQuestionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x000000000097dc09
- (void)generateGadgets;	// IMP=0x000000000097dad0
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)init;	// IMP=0x000000000097da66

@end
