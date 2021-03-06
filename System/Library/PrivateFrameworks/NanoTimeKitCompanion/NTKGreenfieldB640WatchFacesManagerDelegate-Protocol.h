//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NTKGreenfieldB640Manager, NTKGreenfieldB640Model;

@protocol NTKGreenfieldB640WatchFacesManagerDelegate <NSObject>
- (void)didFinishAddingWatchFaceToLibrary:(NTKGreenfieldB640Manager *)arg1;
- (void)greenfieldB640WatchFacesManager:(NTKGreenfieldB640Manager *)arg1 updateStateToError:(NTKGreenfieldB640Model *)arg2;
- (void)greenfieldB640WatchFacesManager:(NTKGreenfieldB640Manager *)arg1 updateStateToSelectWatchFacesWithGreenfieldB640Model:(NTKGreenfieldB640Model *)arg2;
- (void)didStartDecodingWatchFaces:(NTKGreenfieldB640Manager *)arg1;
@end

