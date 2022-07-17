//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface SYTransportLog : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSString *_facility;	// 16 = 0x10
    NSObject<OS_os_log> *_oslog;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000095715
- (void).cxx_destruct;	// IMP=0x0000000000095915
@property(readonly, nonatomic) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property(copy, nonatomic) NSString *facility; // @synthesize facility=_facility;
- (void)_logOSMessage:(const char *)arg1 args:(struct __va_list_tag [1])arg2 returnAddress:(void *)arg3;	// IMP=0x00000000000958de
- (void)logMessage:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x000000000009589c
- (void)logMessage:(id)arg1;	// IMP=0x00000000000957f8
- (void)_createLog;	// IMP=0x00000000000957c8
- (id)init;	// IMP=0x000000000009576a

@end
