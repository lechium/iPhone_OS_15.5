//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MLInternalNLPModelWriter : NSObject
{
}

+ (_Bool)saveCustomSentenceClassifierModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;	// IMP=0x00000000000fab7f
+ (_Bool)saveCustomSentenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;	// IMP=0x00000000000fab6d
+ (_Bool)saveCustomWordTaggingModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;	// IMP=0x00000000000f9f61
+ (_Bool)saveCustomSequenceModelToURL:(id)arg1 modelData:(id)arg2 stringInputName:(id)arg3 classname:(id)arg4 NSError:(id *)arg5;	// IMP=0x00000000000f9f4f

@end

