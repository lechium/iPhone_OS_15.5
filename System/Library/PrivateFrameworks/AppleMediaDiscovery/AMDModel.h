//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface AMDModel : NSManagedObject
{
}

+ (id)getCurrentModelInfoByModelId;	// IMP=0x0000000000079ff0
+ (id)deleteWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079a00
+ (id)getModelInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000794a0
+ (void)saveModels:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078ca0
+ (id)deleteAllModelUrls:(id *)arg1;	// IMP=0x0000000000078770
+ (void)deleteModels:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078170
+ (id)fetchAll:(id *)arg1;	// IMP=0x0000000000077ce0
+ (id)fetchRequest;	// IMP=0x00000000000a3720

// Remaining properties
@property(copy, nonatomic) NSString *compiledModelDir; // @dynamic compiledModelDir;
@property(nonatomic) long long creationTimeSeconds; // @dynamic creationTimeSeconds;
@property(copy, nonatomic) NSString *modelId; // @dynamic modelId;
@property(copy, nonatomic) NSString *url; // @dynamic url;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

