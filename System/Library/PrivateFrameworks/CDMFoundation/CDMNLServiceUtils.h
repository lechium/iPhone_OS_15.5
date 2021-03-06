//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CDMNLServiceUtils : NSObject
{
}

+ (void)populateParser:(id)arg1 parserToSet:(id)arg2;	// IMP=0x0000000000060627
+ (id)buildSetupPSCRequest:(id)arg1;	// IMP=0x000000000006025c
+ (id)buildPSCResponse:(id)arg1 pscRequest:(id)arg2;	// IMP=0x000000000005fb57
+ (id)buildSNLCProtoResponse:(id)arg1 snlcRequest:(id)arg2 parserToSet:(id)arg3;	// IMP=0x000000000005f2f9
+ (id)buildSetupSNLCProtoRequest:(id)arg1;	// IMP=0x000000000005ef2e
+ (id)buildSetupNLv4ProtoRequest:(id)arg1;	// IMP=0x000000000005e6af
+ (unique_ptr_7e96dec3)buildNLv4ProtoRequest:(id)arg1;	// IMP=0x000000000005e5a0

@end

