//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPPhotosProcessingActivity
{
}

+ (_Bool)enabled;	// IMP=0x0010000000007cfe
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008dcd
+ (unsigned long long)taskID;	// IMP=0x0010000000008da9
+ (_Bool)enabledByDefault;	// IMP=0x0010000000008d85
+ (const char *)identifier;	// IMP=0x0010000000008d61
+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x0010000000008cf2
- (void)execute:(id)arg1;	// IMP=0x0040000000007d8d
- (id)criteria;	// IMP=0x0010000000007c06
- (id)init;	// IMP=0x0010000000007bb5

@end

