//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFOutputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005db2c
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005db29
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000000005de0f
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x000000000005de04
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;	// IMP=0x000000000005ddeb
- (_Bool)hasSpaceAvailable;	// IMP=0x000000000005dddb
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x000000000005ddd0
- (id)streamError;	// IMP=0x000000000005ddbe
- (unsigned long long)streamStatus;	// IMP=0x000000000005ddb9
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000005dd84
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000005dd4f
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005dd3c
- (id)propertyForKey:(id)arg1;	// IMP=0x000000000005dd27
- (void)setDelegate:(id)arg1;	// IMP=0x000000000005dc58
- (id)delegate;	// IMP=0x000000000005dc53
- (void)close;	// IMP=0x000000000005dc4e
- (void)open;	// IMP=0x000000000005dc49
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000000005dbf0
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000000005db81
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000005db56
- (id)initToMemory;	// IMP=0x000000000005db33
- (unsigned long long)retainCount;	// IMP=0x000000000005db24
- (_Bool)_isDeallocating;	// IMP=0x000000000005db14
- (_Bool)_tryRetain;	// IMP=0x000000000005db03
- (oneway void)release;	// IMP=0x000000000005dafe
- (id)retain;	// IMP=0x000000000005daf9
- (unsigned long long)hash;	// IMP=0x000000000005daf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005dad1

@end

