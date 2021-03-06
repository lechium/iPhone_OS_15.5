//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController
{
    id _certificateTrust;	// 8 = 0x8
    NSArray *_keyValueSections;	// 16 = 0x10
    NSArray *_keyValueSectionTitles;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000005ffc
@property(retain, nonatomic) NSArray *keyValueSectionTitles; // @synthesize keyValueSectionTitles=_keyValueSectionTitles;
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(retain, nonatomic) id certificateTrust; // @synthesize certificateTrust=_certificateTrust;
- (void)preferredContentSizeChanged:(id)arg1;	// IMP=0x0000000000005f50
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005db9
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000005d11
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005cfc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000005c38
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000005bf4
- (void)setCertificateProperties:(id)arg1;	// IMP=0x0000000000005ae3
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000005ab4
- (void)viewDidLoad;	// IMP=0x0000000000005a85
- (void)_setup;	// IMP=0x00000000000058d1
- (void)dealloc;	// IMP=0x000000000000585c
- (id)initWithTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000000005744
- (id)initWithCertificateProperties:(id)arg1;	// IMP=0x0000000000005628
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x0000000000005522
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000054d6
- (id)init;	// IMP=0x000000000000548a

@end

