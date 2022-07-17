//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonationFeedback/CNDonationValueVisitor-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CNDFDonationStringCollector : NSObject <CNDonationValueVisitor>
{
    NSMutableArray *_visitedStrings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003935
@property(readonly, nonatomic) NSMutableArray *visitedStrings; // @synthesize visitedStrings=_visitedStrings;
- (void)visitDonationValue:(id)arg1 imageData:(id)arg2;	// IMP=0x00000000000038da
- (void)visitDonationValue:(id)arg1 postalAddress:(id)arg2 style:(long long)arg3 label:(id)arg4;	// IMP=0x000000000000372a
- (void)visitDonationValue:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3;	// IMP=0x00000000000036db
- (void)visitDonationValue:(id)arg1 emailAddress:(id)arg2 label:(id)arg3;	// IMP=0x00000000000036c6
- (void)visitDonationValue:(id)arg1 nameComponents:(id)arg2;	// IMP=0x0000000000003570
- (void)_addNonEmptyString:(id)arg1;	// IMP=0x00000000000034f8
- (void)collectStringsFromDonation:(id)arg1;	// IMP=0x00000000000034dd
@property(readonly, nonatomic) NSArray *strings;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000003377

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
