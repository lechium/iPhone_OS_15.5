//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

__attribute__((visibility("hidden")))
@interface NSCFOutputStream : NSOutputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137dca
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000137dc2
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000000001380b8
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000000001380a8
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04 *)arg3;	// IMP=0x000000000013808f
- (_Bool)hasSpaceAvailable;	// IMP=0x000000000013807f
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000000013806f
- (id)streamError;	// IMP=0x000000000013805d
- (unsigned long long)streamStatus;	// IMP=0x0000000000138053
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000013801e
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0000000000137fe9
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000137fd6
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000137fc1
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000137ef2
- (id)delegate;	// IMP=0x0000000000137ee8
- (void)close;	// IMP=0x0000000000137ede
- (void)open;	// IMP=0x0000000000137ed4
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x0000000000137e83
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;	// IMP=0x0000000000137e14
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000137df1
- (id)initToMemory;	// IMP=0x0000000000137dd6
- (unsigned long long)retainCount;	// IMP=0x0000000000137db8
- (_Bool)retainWeakReference;	// IMP=0x0000000000137da7
- (_Bool)allowsWeakReference;	// IMP=0x0000000000137d97
- (oneway void)release;	// IMP=0x0000000000137d8d
- (id)retain;	// IMP=0x0000000000137d75
- (unsigned long long)hash;	// IMP=0x0000000000137d6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000137d48

@end

