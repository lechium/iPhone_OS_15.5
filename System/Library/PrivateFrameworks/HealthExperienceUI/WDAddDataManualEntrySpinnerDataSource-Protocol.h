//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/NSObject-Protocol.h>

@class NSString, WDAddDataManualEntrySpinner;

@protocol WDAddDataManualEntrySpinnerDataSource <NSObject>
- (NSString *)manualEntrySpinner:(WDAddDataManualEntrySpinner *)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(WDAddDataManualEntrySpinner *)arg1;
@end

