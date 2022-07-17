//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUImageExportResult-Protocol.h>

@class NSData, NSString, NSURL, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NUImageExportResult <NUImageExportResult>
{
    NSData *_destinationData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009646a
@property(retain) NSData *destinationData; // @synthesize destinationData=_destinationData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSURL *destinationURL; // @dynamic destinationURL;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
