//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSDictionary, NSSet, NSURL;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL *_url;	// 88 = 0x58
    NSSet *_primaryElements;	// 96 = 0x60
    _Bool _shouldSupportVEVENT;	// 104 = 0x68
    _Bool _shouldSupportVTODO;	// 105 = 0x69
    NSDictionary *_headersToOverride;	// 112 = 0x70
    NSDictionary *_responseHeaders;	// 120 = 0x78
    NSSet *_fallbackElements;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000001e84
@property(retain, nonatomic) NSSet *fallbackElements; // @synthesize fallbackElements=_fallbackElements;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSDictionary *headersToOverride; // @synthesize headersToOverride=_headersToOverride;
@property(nonatomic) _Bool shouldSupportVTODO; // @synthesize shouldSupportVTODO=_shouldSupportVTODO;
@property(nonatomic) _Bool shouldSupportVEVENT; // @synthesize shouldSupportVEVENT=_shouldSupportVEVENT;
- (void)startTaskGroup;	// IMP=0x0000000000001dc1
- (void)_mkcalendarAfterFailureCount:(unsigned long long)arg1;	// IMP=0x00000000000017f6
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;	// IMP=0x0000000000001700

@end

