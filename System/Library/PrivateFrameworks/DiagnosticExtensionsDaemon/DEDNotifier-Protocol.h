//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDBugSession, DEDBugSessionConfiguration;

@protocol DEDNotifier <NSObject>
- (void)cancelNotification;
- (void)scheduleNotification;
- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;
@end

