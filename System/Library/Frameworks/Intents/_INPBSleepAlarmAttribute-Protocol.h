//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDateTime;

@protocol _INPBSleepAlarmAttribute <NSObject>
@property(nonatomic) _Bool hasOverride;
@property(nonatomic) _Bool override;
@property(readonly, nonatomic) _Bool hasBedtime;
@property(retain, nonatomic) _INPBDateTime *bedtime;
@end

