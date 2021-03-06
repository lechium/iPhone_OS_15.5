//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SNLPITFMModelInfo : NSObject
{
    int _loggingComponent;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    NSString *_loggingComponentString;	// 32 = 0x20
}

+ (id)stringForModelType:(unsigned long long)arg1;	// IMP=0x00000000000b1f57
- (void).cxx_destruct;	// IMP=0x00000000000b1fb2
@property(readonly, nonatomic) NSString *loggingComponentString; // @synthesize loggingComponentString=_loggingComponentString;
@property(readonly, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, nonatomic) int loggingComponent; // @synthesize loggingComponent=_loggingComponent;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 loggingComponent:(int)arg2 errorDomain:(id)arg3;	// IMP=0x00000000000b1e44

@end

