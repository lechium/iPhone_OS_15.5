//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAPasteboardItemProviding-Protocol.h>

@class NSString;

@protocol UAPasteboardFileItemProviding <UAPasteboardItemProviding>
@property(nonatomic) _Bool preferFileRep;
- (NSString *)getFileName;
- (void)getDataFileWithCompletionBlock:(void (^)(NSURL *, NSError *))arg1;
@end

