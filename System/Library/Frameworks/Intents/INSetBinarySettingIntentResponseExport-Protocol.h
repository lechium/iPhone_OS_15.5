//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INSetBinarySettingIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *errorDetail;
@property(nonatomic) long long updatedValue;
@property(nonatomic) long long oldValue;
@property(readonly, nonatomic) long long code;
@end

