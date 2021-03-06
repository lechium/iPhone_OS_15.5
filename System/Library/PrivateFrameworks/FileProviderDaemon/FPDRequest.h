//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FPDRequest : NSObject
{
    _Bool _fromPOSIX;	// 8 = 0x8
    _Bool _selectedForMaterialization;	// 9 = 0x9
    _Bool _allowsResurrection;	// 10 = 0xa
    _Bool _providerInitiated;	// 11 = 0xb
    int _pid;	// 12 = 0xc
    unsigned int _qos;	// 16 = 0x10
    NSString *_processName;	// 24 = 0x18
    NSString *_userProcessName;	// 32 = 0x20
    NSString *_executablePath;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
    CDStruct_627e0f85 _requestedExtent;	// 56 = 0x38
    CDStruct_627e0f85 _providedExtent;	// 72 = 0x48
    CDStruct_4c969caf _audit_token;	// 88 = 0x58
}

+ (id)UUIDForExecutablePath:(id)arg1;	// IMP=0x0000000000080e56
+ (id)fixupProcessName:(id)arg1;	// IMP=0x0000000000080c6f
+ (id)requestForPID:(int)arg1 fromPOSIX:(_Bool)arg2 kernelFileInfo:(id)arg3;	// IMP=0x000000000008090f
+ (id)requestForSelf;	// IMP=0x00000000000808f6
+ (id)requestForPID:(int)arg1;	// IMP=0x00000000000808df
+ (id)requestForXPCConnection:(id)arg1;	// IMP=0x00000000000808a7
+ (id)requestForPID:(int)arg1 fromPOSIX:(_Bool)arg2;	// IMP=0x0000000000080892
- (void).cxx_destruct;	// IMP=0x0000000000080ffc
@property(readonly, nonatomic) CDStruct_4c969caf audit_token; // @synthesize audit_token=_audit_token;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(nonatomic, getter=isProviderInitiated) _Bool providerInitiated; // @synthesize providerInitiated=_providerInitiated;
@property(nonatomic) _Bool allowsResurrection; // @synthesize allowsResurrection=_allowsResurrection;
@property(nonatomic) CDStruct_627e0f85 providedExtent; // @synthesize providedExtent=_providedExtent;
@property(nonatomic) CDStruct_627e0f85 requestedExtent; // @synthesize requestedExtent=_requestedExtent;
@property(nonatomic) _Bool selectedForMaterialization; // @synthesize selectedForMaterialization=_selectedForMaterialization;
@property(readonly, nonatomic, getter=isFromPOSIX) _Bool fromPOSIX; // @synthesize fromPOSIX=_fromPOSIX;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *userProcessName; // @synthesize userProcessName=_userProcessName;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;	// IMP=0x0000000000080ebe
- (id)nsfpRequestForSession:(id)arg1;	// IMP=0x0000000000080d80
- (_Bool)isPermittedToAttributeRequestingExecutable:(id)arg1;	// IMP=0x0000000000080cc7
- (id)initWithPID:(int)arg1 fromPOSIX:(_Bool)arg2 withExtent:(CDStruct_627e0f85)arg3;	// IMP=0x00000000000809bd

@end

