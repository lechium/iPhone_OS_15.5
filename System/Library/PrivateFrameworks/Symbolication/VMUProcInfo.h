//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VMUProcInfo : NSObject
{
    unsigned int _task;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSArray *_arguments;	// 24 = 0x18
    NSArray *_envVars;	// 32 = 0x20
    NSString *_procTableName;	// 40 = 0x28
    NSString *_realAppName;	// 48 = 0x30
    NSString *_requestedAppName;	// 56 = 0x38
    NSString *_firstArg;	// 64 = 0x40
    int _pid;	// 72 = 0x48
    int _ppid;	// 76 = 0x4c
    struct timeval _startTime;	// 80 = 0x50
}

+ (int)processParentId:(int)arg1;	// IMP=0x0000000000067159
+ (_Bool)isProcessRunning:(int)arg1;	// IMP=0x0000000000067131
+ (id)getProcessIds;	// IMP=0x0000000000066f9f
- (void).cxx_destruct;	// IMP=0x000000000006857a
- (unsigned long long)hash;	// IMP=0x000000000006854b
- (long long)compareByUserAppName:(id)arg1;	// IMP=0x00000000000684ba
- (long long)compareByName:(id)arg1;	// IMP=0x0000000000068429
- (long long)compare:(id)arg1;	// IMP=0x00000000000683b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068352
- (_Bool)signal:(int)arg1;	// IMP=0x000000000006833d
- (_Bool)terminate;	// IMP=0x00000000000682fe
@property(readonly, nonatomic) _Bool shouldAnalyzeWithCorpse;
- (_Bool)isRunning;	// IMP=0x0000000000068107
- (id)platformName;	// IMP=0x00000000000680f3
- (unsigned int)platform;	// IMP=0x00000000000680e6
- (_Bool)isNative;	// IMP=0x00000000000680de
- (int)cpuType;	// IMP=0x0000000000068034
- (_Bool)isCFM;	// IMP=0x0000000000067fdb
- (_Bool)isMachO;	// IMP=0x0000000000067fc6
- (_Bool)isApp;	// IMP=0x0000000000067fbe
- (void)update;	// IMP=0x0000000000067ed6
- (unsigned int)task;	// IMP=0x0000000000067ece
- (int)ppid;	// IMP=0x0000000000067e9d
- (int)pid;	// IMP=0x0000000000067e94
- (id)description;	// IMP=0x0000000000067e67
- (id)name;	// IMP=0x0000000000067d70
- (id)userAppName;	// IMP=0x0000000000067ce1
- (id)valueForEnvVar:(id)arg1;	// IMP=0x0000000000067a94
- (id)envVars;	// IMP=0x0000000000067a48
- (id)arguments;	// IMP=0x00000000000679fc
- (id)firstArgument;	// IMP=0x0000000000067990
- (id)requestedAppName;	// IMP=0x0000000000067905
- (id)realAppName;	// IMP=0x000000000006787d
- (id)_infoFromCommandLine:(int)arg1;	// IMP=0x000000000006745f
- (id)procTableName;	// IMP=0x0000000000067317
- (struct timeval)startTime;	// IMP=0x00000000000671eb
- (void)dealloc;	// IMP=0x0000000000066f55
- (id)initWithTask:(unsigned int)arg1;	// IMP=0x0000000000066ee9
- (id)initWithPid:(int)arg1;	// IMP=0x0000000000066ec5

@end
