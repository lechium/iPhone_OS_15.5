//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SiriCoreSQLiteRecord, SiriCoreSQLiteValue;

@protocol SiriCoreSQLiteRecordBuilder <NSObject>
- (id <SiriCoreSQLiteRecord>)build;
- (void)setValue:(id <SiriCoreSQLiteValue>)arg1 forColumnName:(NSString *)arg2;
- (void)reset;
@end

