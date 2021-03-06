//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CPUIImageRowCellConfigurationProtocol <NSObject>
- (_Bool)enabled;
- (_Bool)showActivityIndicator;
- (NSArray *)artworkCatalogs;
- (void (^)(void))selectTitleBlock;
- (void (^)(long long))selectGridItemBlock;
- (NSString *)title;
@end

