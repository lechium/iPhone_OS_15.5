//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface SBDataPlanExpirationAlertItem
{
    NSDate *_expirationDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a460c
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000000003a4279
- (id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000000003a4218

@end

