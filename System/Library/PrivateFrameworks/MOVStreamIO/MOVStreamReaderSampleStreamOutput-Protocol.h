//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/MOVStreamReaderBaseStreamOutput-Protocol.h>

@class NSString;

@protocol MOVStreamReaderSampleStreamOutput <MOVStreamReaderBaseStreamOutput>
@property(readonly) NSString *relationSpecifier;
@property(readonly) NSString *relatedStreamId;
- (struct opaqueCMSampleBuffer *)nextSampleBufferForStreamAttachementsData:(out id *)arg1 timestamp:(out CDStruct_1b6d18a9 *)arg2 error:(out id *)arg3;
- (struct opaqueCMSampleBuffer *)grabNextSampleBufferForStreamTimestamp:(out CDStruct_1b6d18a9 *)arg1 error:(out id *)arg2;
@end

