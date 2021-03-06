//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TRDeviceSetupAction : NSObject
{
    NSString *_actionType;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
}

+ (id)actionWithActionType:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000014c1f
+ (id)actionWithData:(id)arg1 error:(id *)arg2 supportsLegacy:(_Bool)arg3;	// IMP=0x0000000000015df6
- (void).cxx_destruct;	// IMP=0x0000000000014eae
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) unsigned long long protocolVersion;
- (id)description;	// IMP=0x0000000000014dbe
- (id)propertyListRepresentation;	// IMP=0x0000000000014c8b
- (id)_initWithActionType:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000014b66
- (id)init;	// IMP=0x0000000000014b50
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x000000000001622f

@end

