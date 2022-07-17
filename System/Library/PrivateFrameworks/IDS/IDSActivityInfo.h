//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@interface IDSActivityInfo : NSObject <NSSecureCoding>
{
    NSString *_subActivity;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
    NSData *_appContext;	// 24 = 0x18
    NSArray *_deviceUniqueIDs;	// 32 = 0x20
    NSArray *_tokens;	// 40 = 0x28
    NSArray *_URIs;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028509
+ (id)activityInfoWithSubActivity:(id)arg1 devices:(id)arg2;	// IMP=0x0000000000028075
+ (id)activityInfoWithSubActivity:(id)arg1 URIs:(id)arg2;	// IMP=0x0000000000027fb9
+ (id)activityInfoWithSubActivity:(id)arg1 tokens:(id)arg2;	// IMP=0x0000000000027efd
- (void).cxx_destruct;	// IMP=0x00000000000288c3
@property(readonly, nonatomic) NSArray *URIs; // @synthesize URIs=_URIs;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSArray *deviceUniqueIDs; // @synthesize deviceUniqueIDs=_deviceUniqueIDs;
@property(copy, nonatomic) NSData *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *subActivity; // @synthesize subActivity=_subActivity;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000285ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028511
- (id)description;	// IMP=0x0000000000028413
- (id)_initWithSubActivity:(id)arg1;	// IMP=0x0000000000028155

@end
