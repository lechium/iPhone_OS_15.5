//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CTCellularPlanJsonResponseParser : NSObject
{
}

+ (_Bool)parseResponseJson:(id)arg1 setUrl:(id *)arg2 setParameters:(id *)arg3;	// IMP=0x0000000000005a48
+ (_Bool)parseCountryListResponseData:(id)arg1 intoSupportedCountryList:(id *)arg2 intoUnsupportedCountryList:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000005894
+ (_Bool)parseSubscriptionsResponseData:(id)arg1 intoSubscriptions:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000000563a
+ (_Bool)parsePurchaseResponseData:(id)arg1 intoShouldDownloadProfile:(_Bool *)arg2 iccid:(id *)arg3 responseCode:(int *)arg4 responseText:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000054a1
+ (_Bool)parseInitiatePurchaseResponseData:(id)arg1 intoShouldPurchase:(_Bool *)arg2 responseCode:(int *)arg3 responseText:(id *)arg4 buddyML:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000000535f
+ (_Bool)parseHandoffTokenResponseData:(id)arg1 intoHandoffToken:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000005285
+ (_Bool)parseCreateSessionResponseData:(id)arg1 intoSessionId:(id *)arg2 podId:(id *)arg3 urls:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000050d0
+ (id)sessionIdFromJsonData:(id)arg1;	// IMP=0x0000000000005062
+ (id)sessionIdFromObject:(id)arg1;	// IMP=0x0000000000004ff3

@end
