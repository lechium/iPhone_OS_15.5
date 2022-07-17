//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSFileHandle, NSURL;
@protocol OS_os_log;

@interface XRXMLValidator : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSURL *_schemaURL;	// 16 = 0x10
    NSArray *_errorReplacements;	// 24 = 0x18
    unsigned long long _errorsEmittedCount;	// 32 = 0x20
    _Bool _limitMessageEmitted;	// 40 = 0x28
    NSFileHandle *_errorFile;	// 48 = 0x30
    NSFileHandle *_diagnosticFile;	// 56 = 0x38
    unsigned long long _errorLimit;	// 64 = 0x40
    NSObject<OS_os_log> *_log;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000019550
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property unsigned long long errorLimit; // @synthesize errorLimit=_errorLimit;
@property(retain) NSFileHandle *diagnosticFile; // @synthesize diagnosticFile=_diagnosticFile;
@property(retain) NSFileHandle *errorFile; // @synthesize errorFile=_errorFile;
- (_Bool)validate;	// IMP=0x0000000000018cc3
- (id)findErrorMessageForErrorPtr:(struct _xmlError *)arg1;	// IMP=0x0000000000018980
- (id)initWithSourceURL:(id)arg1 schemaURL:(id)arg2;	// IMP=0x0000000000018866

@end
