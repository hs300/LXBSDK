//
//  VisitorReqModel.h
//  LXBSDK
//
//  Created by pub on 2024/1/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface VisitorReqModel : NSObject
@property(nonatomic, strong)NSString *device_id;
@property(nonatomic, strong)NSString *uuid;
@property(nonatomic, assign)NSInteger channel_id;
@end

NS_ASSUME_NONNULL_END
